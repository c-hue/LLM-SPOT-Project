from setuptools import find_packages
from setuptools import setup

setup(
    name='spot_schemas_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('spot_schemas_interfaces', 'spot_schemas_interfaces.*')),
)
