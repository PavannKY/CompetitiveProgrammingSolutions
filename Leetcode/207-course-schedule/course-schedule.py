from collections import deque
from typing import List

class Solution:

    def detect(self, adj, indegree):
        q = deque()

        for i in range(len(indegree)):
            if indegree[i] == 0:
                q.append(i)

        count = 0

        while q:
            node = q.popleft()
            count += 1

            for neigh in adj[node]:
                indegree[neigh] -= 1
                if indegree[neigh] == 0:
                    q.append(neigh)

        return count

    def canFinish(self, numCourses: int, arr: List[List[int]]) -> bool:

        adj = [[] for _ in range(numCourses)]
        indegree = [0] * numCourses

        for course, prereq in arr:
            adj[prereq].append(course)
            indegree[course] += 1

        return self.detect(adj, indegree) == numCourses