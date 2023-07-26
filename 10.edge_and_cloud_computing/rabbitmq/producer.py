#!/usr/bin/env python
import pika

# If you want to have a more secure SSL authentication, use ExternalCredentials object instead
#credentials = pika.PlainCredentials(username=’thebigrabbit’, password='MyS3cur3Passwor_d', erase_on_connect=True)
parameters = pika.ConnectionParameters(host='127.0.0.1', port=5672) #, virtual_host='cherry_broker', credentials=credentials)

# We are using BlockingConnection adapter to start a session. It uses a procedural approach to using Pika and has most of the asynchronous expectations removed
connection = pika.BlockingConnection(parameters)
# A channel provides a wrapper for interacting with RabbitMQ
channel = connection.channel()

# Check for a queue and create it, if necessary
channel.queue_declare(queue='hello')
# For the sake of simplicity, we are not declaring an exchange, so the subsequent publish call will be sent to a Default exchange that is predeclared by the broker
channel.basic_publish(exchange='', routing_key='hello', body='Hello World!')
print(" [x] Sent 'Hello World!'")

# Safely disconnect from RabbitMQ
connection.close() 
