# Setup a local development environment

This has been tested on Ubuntu 20 and 24 systems.

## Install Kaitai compiler

We won't be using the Kaitai compiler because we will be building our own, but it is the easiest way to get all the runtime libraries.

See the [Kaitai docs](https://kaitai.io/#download), at the moment:

```bash
curl -LO https://github.com/kaitai-io/kaitai_struct_compiler/releases/download/0.10/kaitai-struct-compiler_0.10_all.deb
sudo apt-get install ./kaitai-struct-compiler_0.10_all.deb
```


## Install Java

The default Java in Ubuntu 24 is Java 21, that does not work. You need to install Java 17, which is in the default repositories:

```bash
sudo apt install openjdk-17-jdk
```

if needed:

```bash
sudo apt remove openjdk-21-jdk
```

## Install SBT

Follow the instructions at <https://www.scala-sbt.org/1.x/docs/Installing-sbt-on-Linux.html#Ubuntu+and+other+Debian-based+distributions> to install SBT.

## Setup the Python environment

```bash
sudo apt install python3-venv
python3 -m venv .env
pip install -e .
```

## Run the tests

```bash
source .env/bin/activate
make test
```