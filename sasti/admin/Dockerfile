FROM python:3.8-alpine

RUN mkdir /app 
COPY ssti.py topsecret.py /app/
RUN chmod +x /app/*

RUN pip install python-multipart flask
WORKDIR /app

CMD ["python3","/app/ssti.py"]
