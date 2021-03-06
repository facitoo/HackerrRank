import collections
import heapq

def check(i,k):
    temp=int(i/k)
    if(temp%2==0):
        return 0
    else:
        temp=int(i%k)
        return (k-temp)
        
def calc(stops,st,k):
    t=0
    for i in range (0,stops):
        t=t+st[i]
        if t<k:
            continue
        temp=check(t,k)
        t=t+temp
    return t

def shortestPath(edges, source, sink):
    graph = collections.defaultdict(list)
    for l, r, c in edges:
        graph[l].append((c,r))
    queue, visited = [(0, source, [])], set()
    heapq.heapify(queue)
    while queue:
        (cost, node, path) = heapq.heappop(queue)
        if node not in visited:
            visited.add(node)
            path = path + [node]
            if node == sink:
                return (cost,path)
            for c, neighbour in graph[node]:
                if neighbour not in visited:
                    heapq.heappush(queue, (cost+c, neighbour, path))
def Path(edges, source, sink):
    graph = collections.defaultdict(list)
    for l, r, c in edges:
        graph[l].append((c,r))
    queue, visited = [(0, source, [])], set()
    heapq.heapify(queue)
    while queue:
        (cost, node, path) = heapq.heappop(queue)
        if node not in visited:
            visited.add(node)
            path = path + [node]
            if node == sink:
                return (cost)
            for c, neighbour in graph[node]:
                if neighbour not in visited:
                    heapq.heappush(queue, (cost+c, neighbour, path))

if __name__ == "__main__":
    n = input()
    k = int(input())
    m = int(input())
    edges = []
    station=[]
    st=[]
    for i in range (0,m):
        a,b,t=map(int, input().split())
        if(a>b):
            edges.append([str(b),str(a),t])
        else:
            edges.append([str(a),str(b),t])
    time,station=shortestPath(edges, "1", n)
    ln=len(station)
    tep=Path(edges, station[ln-2], station[ln-1])
    for i in range (1,ln-1):
        tt=Path(edges,str(station[i-1]),str(station[i]))
        st.append(tt)
    tt=time-tep       
    total=calc((ln-2),st,k)
    print(total+tep)
