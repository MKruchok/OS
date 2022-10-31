#!/bin/bash

/root/prometheus237/prometheus --config.file=/root/prometheus237/prometheus.yml &
/root/node_exporter/node_exporter &

java -jar /root/db6mk.jar