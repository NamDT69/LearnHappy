#include <iostream>
#include <set>

struct MySet {
    struct ClosedIntervalWithAtLeast1Gap {
        int a, b;
        auto operator<(const ClosedIntervalWithAtLeast1Gap& rhs) const -> bool { return b + 1 < rhs.a; }
        void mergeWith(const ClosedIntervalWithAtLeast1Gap& other) { b + 1 == other.a ? b = other.b : a = other.a; }
        auto contains(int k) const -> bool { return a <= k && k <= b; }
    };
    std::set<ClosedIntervalWithAtLeast1Gap> s;
    int m = 0;
    void insert(int k) {
        ClosedIntervalWithAtLeast1Gap kk{k, k};
        auto [lb, ub] = s.equal_range(kk);
        for (auto it = lb; it != ub;) kk.mergeWith(*it++);
        s.erase(lb, ub);
        s.insert(ub, kk); // use ub as hint
    }
    auto findMinNotInSet() -> int {
        if (!s.empty() && begin(s)->contains(m)) m = begin(s)->b + 1;
        return m;
    }
};

auto main() -> int {
    int q = 0;
    std::cin >> q;
    MySet ms;
    for (int n = 0; q-- > 0; std::cin.clear(), std::cin.ignore()) {
        if (!(std::cin >> n)) std::cout << (n = ms.findMinNotInSet()) << "\n";
        ms.insert(n);
    }
}