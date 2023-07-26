FROM python:3.7
LABEL maintainer='diot'
WORKDIR /usr/src/app
COPY mqtt_subscriber.py /usr/src/app
COPY requirements.txt /usr/src/app
RUN pip3 install -r requirements.txt
CMD ["python3","mqtt_subscriber.py"]
