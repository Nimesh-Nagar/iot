FROM python:3.10.6-alpine3.16

LABEL maintainer="n.nimesh02@gmail.com"

# sets working directory inside container (current directory) 
WORKDIR /usr/src/pythoncode

# coping file from local system to container
COPY add_two_num.py /usr/src/pythoncode/

CMD ["python3","add_two_num.py"]

