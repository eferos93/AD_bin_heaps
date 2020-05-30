import pandas as pd
import matplotlib.pyplot as plt

min_heap_times = pd.read_csv("benchmark.txt", sep="\t")

ax = plt.gca() #gca = get current axis

min_heap_times.plot(kind='line', x='n', y='On Heaps', ax=ax)
min_heap_times.plot(kind='line', x='n', y='On Arrays', ax=ax)
plt.xlabel('Input size')
plt.ylabel('Elapsed time (seconds)')

plt.savefig("benchmark_heaps.png")
plt.show("benchmark_heaps.png")
