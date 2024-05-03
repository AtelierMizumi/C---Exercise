class ChallengeClass:
    def Cal(self, es):
        return self.solve_es(es)
    def parse_e(self, e):
        p = e.split()
        x = int(p[0][:-1])
        y = int(p[2][:-1])
        z = int(p[4][:-1])
        r = int(p[6])
        return x, y, z, r
    def solve_es(self, es):
        mi = [float('inf')] * 3
        ma = [float('-inf')] * 3
        for e in es.split(","):
            x, y, z, re = self.parse_e(e)
            mi[0] = min(mi[0], x)
            mi[1] = min(mi[1], y)
            mi[2] = min(mi[2], z)
            ma[0] = max(ma[0], x)
            ma[1] = max(ma[1], y)
            ma[2] = max(ma[2], z)
        mir = mi[0] * mi[1] * mi[2]
        mar = ma[0] * ma[1] * ma[2]
        return mir * mar