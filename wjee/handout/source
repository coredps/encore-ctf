# app.py

from flask import Flask, render_template, request, redirect, url_for, session
import os
import jwt
from datetime import datetime, timedelta

app = Flask(__name__)
app.secret_key = os.urandom(24)


SECRET_KEY = 'hA1lc0rE'


users = {
    'admin': 'supersecret',
    'shawty': 'uwu',
}

@app.route('/get_token/<username>')
def get_token(username):
    if username in users:
        payload = {
            'username': username,
            'exp': datetime.utcnow() + timedelta(seconds=120)  # token expires every 5 mins
        }
        token = jwt.encode(payload, SECRET_KEY, algorithm='HS256')
        return token
    else:
        return 'invalid', 404

@app.route('/challenge')
def challenge():
    token = request.args.get('token', None)
    if token:
        try:
            payload = jwt.decode(token, SECRET_KEY, algorithms=['HS256'])
            username = payload['username']
            if username == 'admin':
                return 'Flag: enc0re{REDACTED}'
        except jwt.ExpiredSignatureError:
            return 'Token expired', 401
        except jwt.DecodeError:
            return 'Invalid token', 401
    return 'Unauthorized', 401

if __name__ == '__main__':
    app.run(debug=True)
