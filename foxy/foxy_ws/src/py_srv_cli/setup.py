from setuptools import setup

package_name = 'py_srv_cli'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='zyh',
    maintainer_email='zyhzyh9426@163.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'service = py_srv_cli.py_srv:main',
            'client = py_srv_cli.py_cli:main',
        ],
    },
)
