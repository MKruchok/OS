FROM ubuntu:22.04

RUN apt update && apt install -y wget openjdk-18-jdk

RUN wget https://github.com/MKruchok/Databases/releases/download/db6mk-1.0/db6mk.jar -O /root/db6mk.jar

RUN wget https://github.com/prometheus/node_exporter/releases/download/v1.3.1/node_exporter-1.3.1.linux-amd64.tar.gz -O /root/node_exporter.tar.gz
RUN mkdir -p /root/node_exporter
RUN tar -xf /root/node_exporter.tar.gz -C /root/node_exporter --strip-components=1

RUN wget https://github.com/prometheus/prometheus/releases/download/v2.37.0/prometheus-2.37.0.linux-amd64.tar.gz -O /root/prometheus237.tar.gz
RUN mkdir -p /root/prometheus237
RUN tar -xf /root/prometheus237.tar.gz -C /root/prometheus237 --strip-components=1

ADD prometheus.yml /root/prometheus237/

ADD entry.sh /root/entry.sh
RUN chmod +x /root/entry.sh

ENTRYPOINT /root/entry.sh