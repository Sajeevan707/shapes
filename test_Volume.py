from re import S
from Volume import Cube
from Volume import Sphere

C3D = Cube(3,4.0)
C5D = Cube(5,4.0)
C8D = Cube(8,4.0)

S3D = Sphere(3,4.0)
S5D = Sphere(5,4.0)
S8D = Sphere(8,4.0)

print("3D Cube : ")
C3D.print_info()
print("5D Cube : ")
S5D.print_info()
print("8D Cube : ")
C8D.print_info()

print("3D Sphere : ")
S3D.print_info()
print("3D Sphere : ")
S5D.print_info()
print("3D Sphere : ")
S8D.print_info()
