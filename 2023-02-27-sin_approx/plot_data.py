import matplotlib.pyplot as plt # plot
import numpy as np # read data

N, mysin, exact, diff  = np.loadtxt("datos.txt", unpack=True)
fig, ax = plt.subplots()
ax.loglog(N, diff, '-o', label="data")
ax.set_xlabel("iter")
ax.set_ylabel("Percentual diff")
plt.show()
fig.savefig("fig_datos.pdf",bbox_inches='tight')
