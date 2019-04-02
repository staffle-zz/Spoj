import math as m
ll=lambda : list(map(int,input().split()))
class Graph(): 
	def __init__(self, vertices): 
		self.graph = [[0 for column in range(vertices)]
							for row in range(vertices)] 
		self.V = vertices 
	def isSafe(self, v, pos, path): 
		if self.graph[ path[pos-1] ][v] == 0: 
			return False
		for vertex in path: 
			if vertex == v: 
				return False

		return True
	def hamCycleUtil(self, path, pos): 
		if pos == self.V: 
			if self.graph[ path[pos-1] ][ path[0] ] == 1: 
				return True
			else: 
				return False

		for v in range(1,self.V): 

			if self.isSafe(v, pos, path) == True: 

				path[pos] = v 

				if self.hamCycleUtil(path, pos+1) == True: 
					return True
				path[pos] = -1

		return False

	def hamCycle(self): 
		path = [-1] * self.V 
		path[0] = 0

		if self.hamCycleUtil(path,1) == False: 
			print ("NO")
			return False

		self.printSolution(path) 
		return True

	def printSolution(self, path): 
		print ("YES")

for _ in range(int(input())):
	[v,d]=ll()
	temp=ll()
	temp=[0]+temp
	g = Graph(v)
	l=[[0]*v for i in range(v)]
	g.graph=l
	for i in range(2,v+1):
		for j in range(i+1,v+1):
			if(abs(temp[i]-temp[j])<=d):
				g.graph[i-1][j-1]=1
				g.graph[j-1][i-1]=1
	for i in range(2,v+1):
		if(abs(temp[i]-temp[1])<=d):
			g.graph[i-1][0]=1
			g.graph[0][i-1]=1
		else:
			g.graph[i-1][0]=1;
	g.hamCycle()