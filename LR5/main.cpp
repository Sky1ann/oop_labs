#include "src/list.cpp"
#include "src/MemoryResourse.cpp"


struct ComplexType {
    int id;
    double value;
    std::string name;
};


int main() {
    FixedBlockMemoryResource memoryResource(1024); // фиксированный блок 1024 байта
    SingleLinkedList<int> intList(&memoryResource);
    intList.push_front(10);
    intList.push_front(20);
    intList.push_front(30);

    std::cout << "intList: ";
    for (auto it = intList.begin(); it != intList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    SingleLinkedList<ComplexType> complexList(&memoryResource);


    complexList.push_front({1, 3.14, "example1"});
    complexList.push_front({2, 2.71, "example2"});

    std::cout << "complexList: ";
    for (auto it = complexList.begin(); it != complexList.end(); ++it) {
        std::cout << "{" << it->id << ", " << it->value << ", " << it->name << "} ";
    }
    std::cout << std::endl;


    return 0;
}
