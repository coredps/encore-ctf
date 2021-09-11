FROM python:3.8-alpine

RUN mkdir /app 
COPY index.html main.py /app/
RUN chmod +x /app/*

RUN pip install python-multipart uvicorn starlette jinja2 python-multipart
WORKDIR /app

CMD ["python3","/app/main.py"]
