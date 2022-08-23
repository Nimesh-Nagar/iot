from arm32v7/python:rc-buster

LABEL maintainer="writankar-cr"

WORKDIR /sensor-codes

COPY DHT22-sensor.py /sensor-codes

RUN pip3 install Adafruit_DHT

CMD ["python3", "DHT22-sensor.py"]

