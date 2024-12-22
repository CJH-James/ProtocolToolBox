

### version info

```bash
    gcc:14.2.0
    docker:27.4.1, build b9d17ea

```


### Docker envir build

- Build Docker 
```bash
    docker build -t gcc_dev:0.1.0 ./dev_envir/

    docker run -v /YOUR_PATH_TO_REPO/ProtocolToolBox:/ProtocolToolBox --name ProtocolToolBox-dev -it gcc_dev:0.1.0

```

- Get into the Docker Container again
```bash
    docker start ProtocolToolBox-dev
    docker attach ProtocolToolBox-dev

```



Fail list:
1. Docker Permission denied

```bash
ERROR: permission denied while trying to connect to the Docker daemon socket at unix:///var/run/docker.sock: Head "http://%2Fvar%2Frun%2Fdocker.sock/_ping": dial unix /var/run/docker.sock: connect: permission denied
```

solution:
```bash
    sudo groupadd docker
    sudo usermod -aG docker $USER
    reboot
```
