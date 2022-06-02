# Docker Note

## What is Docker?
Docker is a container engine (an engine or tool for container management) based on the namespace, control groups features of Linux kernel.[1] So that's why the docker toolbox installed a virtual box for my windows8.1 OS. And it cannot run a Windows conatiner on Linux host.

## Why we uses Docker?
1. Comapred to virtual machine, it is light-weight, easiy for depolyment or portable which is feasible for today's service implementations. (That's what I understand)
2. Compared to the container of linux kernel,  Docker has well-defined wrapper components that make packaging applications easy. That means it does all the work to decouple applicaiton from infrastructure by packing all application system requirements into container[1].

## When and where we uses Docker?


## How to use Docker?
Refer to Docker offical getting-started doc: https://docs.docker.com/get-started/

## More Notes
1. Docker uses copy-on-write union file system for its image strage.
    Copy-on-write system:


## Some questions
1. __Q__: For description 'Once you package a container with required applications using Docker, you can run it on any other host which has Docker installed', does that mean Docker is a platform which normalize all possible requirements and make it easier to deploy applications on compatible Linux?

    __A__: So it says that Docker is not a platform as service technology. And it is not a configuration management system as well. It is just a tool to manage conatiners. But it can configure container actually using Dockerfiles, right? What's difference between configuration management and configuring a container?

## Reference Page
1. https://devopscube.com/what-is-docker/