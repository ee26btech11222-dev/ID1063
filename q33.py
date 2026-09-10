import numpy as np
import matplotlib.pyplot as plt

# Define the function f(x) = e^x - 2 and its derivative
def f(x):
    return np.exp(x) - 2

def df(x):
    return np.exp(x)

# 1. Newton-Raphson Step (1 iteration from x0 = 1.0)
x0 = 1.0
x1 = x0 - f(x0) / df(x0)

# 2. Exact root computation
root_exact = np.log(2)

print(f"Value after 1 Newton-Raphson iteration: {x1:.4f}")
print(f"Exact root (ln 2): {root_exact:.4f}")

# 3. Plotting f(x)
x = np.linspace(-1, 2, 400)
y = f(x)

plt.figure(figsize=(8, 5))
plt.plot(x, y, label=r'$f(x) = e^x - 2$', color='blue', linewidth=2)

# Reference line y = 0
plt.axhline(0, color='gray', linestyle='--', linewidth=1)

# Plot markers
plt.plot(x0, f(x0), 'go', label=f'Initial Guess ($x_0 = {x0}$)')
plt.plot(x1, 0, 'ro', label=f'After 1 Iteration ($x_1 \\approx {x1:.2f}$)')
plt.plot(root_exact, 0, 'kx', markersize=8, label=f'Exact Root ($x \\approx {root_exact:.2f}$)')

# Graph aesthetics
plt.title(r'Graph of $f(x) = e^x - 2$', fontsize=14)
plt.xlabel('x', fontsize=12)
plt.ylabel('f(x)', fontsize=12)
plt.grid(True, linestyle=':', alpha=0.7)
plt.legend(fontsize=10)

plt.show()
plt.savefig("newton_raphson_method.png")
