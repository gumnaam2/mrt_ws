from setuptools import find_packages, setup

package_name = 'arucoasmt'

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
    maintainer='siddhant',
    maintainer_email='24B1209@iitb.ac.in',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'pubtest = arucoasmt.pubtest:main',
                'subtest = arucoasmt.subtest:main',
                'srvtest = arucoasmt.srvtest:main',
                'clitest = arucoasmt.clitest:main',
                'imgclient = arucoasmt.imgclient:main',
                'processor = arucoasmt.processor:main'
        ],
    },
)
