from arm32v7/python:rc-buster

LABEL maintainer="writankar-cr"

WORKDIR /app

COPY led-blink.py /app

RUN pip3 install rpi.gpio

CMD ["python3", "led-blink.py"]

