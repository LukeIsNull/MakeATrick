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

2. Docker engine comprises the docker daemon, an API interface, and Docker CLI. [1]  

    Docker daemon (dockerd) is responsible for building docker images.
    Docker-containerd (containerd) is responsible for downloading the docker images and running them as a container.
    Docker-runc (runc) is responsible for creating the namespace and cgroups required for a container.

3. Docker image: It contains the OS libraries, dependencies, and tools to run an application. Every image is created from a base image. There are docker utilities to create the initial parent base image. It takes the required OS libraries and bakes them into a base image. [1]

4. In Dockerfile, the top layer of an image (container layer) is writable and used by the running container. Other layers in the image are read-only. [1]

5. Docker registry like Docker Hub is a repo for docker images.

6. (*Important*) A container is a process with enough isolation of userspace components to give a feeling of a separate operating system. Based on the relation of userspace and kernel space, containers run as process which just like an individual OS. But they share kernel actually and contain their own files. Due to the process property, each container which is also process has good isolation with others.

7. Key features for realizing docker: namespace and control group (cgroups). Namespaces are responsible for containers’ mount points, user, IP address, process management, etc. So essentially, it sets boundaries for the containers. [1] croups are responsible for the memory or CPU limit assigned to container.


## Some questions
1. __Q__: For description 'Once you package a container with required applications using Docker, you can run it on any other host which has Docker installed', does that mean Docker is a platform which normalize all possible requirements and make it easier to deploy applications on compatible Linux?

    __A__: So it says that Docker is not a platform as service technology. And it is not a configuration management system as well. It is just a tool to manage conatiners. Docker and other big organizations contributed to a standard container runtime and management layers.
    But it can configure container actually using Dockerfiles, right? What's difference between configuration management and configuring a container?

2. __Q__: As it said, a container is a process. So why we need a container for deploying application rather than running applications as a process? Is it because docker simplify all the backend configurations rathan than set them manually?

    __A__:

## Reference Page
1. https://devopscube.com/what-is-docker/