from setuptools import find_packages
from setuptools import setup

setup(
    name='first_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('first_interfaces', 'first_interfaces.*')),
)
