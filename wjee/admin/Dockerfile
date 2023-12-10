FROM python:3.8-alpine

RUN mkdir /app 
COPY app.py /app/
RUN chmod +x /app/*

RUN pip install flask PyJWT
WORKDIR /app

CMD ["python3","/app/app.py"]
