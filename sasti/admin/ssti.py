#!/usr/bin/env python3

from flask import Flask, render_template_string, request, Response

app = Flask(__name__)
app.config.from_pyfile('topsecret.py')
@app.route('/')
def index():
    return Response(open(__file__).read(), mimetype='text/plain')

@app.route('/vuln')
def vuln():
    query = request.args['query'] if 'query' in request.args else 'eh?'
    if len(query) > 21:
        return "nononono"
    return render_template_string(query)

app.run('0.0.0.0', 1337)
