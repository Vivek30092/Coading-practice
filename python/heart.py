import matplotlib.pyplot as plt
import numpy as np

# Create data for the plot
x = np.linspace(0, 10, 100)  # 100 values between 0 and 10
y = np.sin(x)  # Sine of x values

# Create the plot
plt.plot(x, y)

# Add labels and title
plt.xlabel('X axis')
plt.ylabel('Y axis')
plt.title('Sine Wave')

# Display the plot
plt.show()
