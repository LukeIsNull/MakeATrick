# syntax=docker/dockerfile:1

FROM ubuntu:latest

WORKDIR /app

RUN apt-get update

RUN apt-get install -y gcc

RUN apt-get install -y g++

COPY main.cpp main.cpp

RUN g++ -o main.out main.cpp -g -Wall

CMD ["./main.out"]
