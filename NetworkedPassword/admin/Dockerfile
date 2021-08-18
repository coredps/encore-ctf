FROM tiangolo/uvicorn-gunicorn-starlette:python3.7-alpine3.8

COPY index.html main.py /app/

RUN pip install jinja2 python-multipart


CMD ["./run.sh"]
