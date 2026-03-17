from setuptools import find_packages, setup

package_name = 'spot_schemas'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='thflinh',
    maintainer_email='thlinh03@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
		'rotate_schema = spot_schemas.rotate_schema:main',
        'walking_schema = spot_schemas.walking_schema:main'
		'detect_color_schema = spot_schemas.detect_color_schema:main',
        ],
    },
)
