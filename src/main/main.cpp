// #include "../table/table.hpp"
// #include "../list/list.hpp"
// #include "../array/array.hpp"
// #include "../bit/bit.hpp"
// #include "../tree/tree.hpp"
#include "../graph/graph.hpp"
// #include "../queue/queue.hpp"
// #include "../stack/stack.hpp"
// #include "../heap/heap.hpp"

int main(int argc, char **argv) {
    vector<string> airports = {
        "BGI", "CDG", "DEL", "DOH", "DSM", "EWR", "EYW", "HND", "ICN",
        "JFK", "LGA", "LHR", "ORD", "SAN", "SFO", "SIN", "TLV", "BUD"};
    vector<pair<string, string>> routes = {
        {"DSM", "ORD"},
        {"ORD", "BGI"},
        {"BGI", "LGA"},
        {"SIN", "CDG"},
        {"CDG", "SIN"},
        {"CDG", "BUD"},
        {"DEL", "DOH"},
        {"DEL", "CDG"},
        {"TLV", "DEL"},
        {"EWR", "HND"},
        {"HND", "ICN"},
        {"HND", "JFK"},
        {"ICN", "JFK"},
        {"JFK", "LGA"},
        {"EYW", "LHR"},
        {"LHR", "SFO"},
        {"SFO", "SAN"},
        {"SFO", "DSM"},
        {"SAN", "EYW"}};
    string start = "LGA";
    cout << airportRoute(airports, routes, start) << endl;
    return 0;
}