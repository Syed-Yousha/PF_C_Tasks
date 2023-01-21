import math

# Distances traveled in the x and y directions
x = input("displacement after leaving the mail post office: ")
y = input("displacement after change the direction: ")

dx = int(y) * math.cos(math.radians(60.0))
dy = int(x + y) * math.sin(math.radians(60.0))

# Displacement from the starting point
displacement = math.sqrt(dx**2 + dy**2)

print(f"the displacement is => {displacement}")