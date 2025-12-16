class RecentCounter:
    def __init__(self):
        self.requests = []
    def ping(self, t: int) -> int:
        self.requests.append(t)
        while self.requests[0] < t - 3000:
            self.requests.pop(0)
        
        return len(self.requests)
    
    # Testando
counter = RecentCounter()
print(counter.ping(1))     # 1
print(counter.ping(100))   # 2  
print(counter.ping(3001))  # 3
print(counter.ping(3002))  # 3