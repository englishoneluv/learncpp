#include <vector>

std::vector<int> MakeVector1() {
    /* 
        This function creates a new vector!.
        Value type: int
        The values should be: 1, 2, 3

        Example.
        call: MakeVector1()
        output: [1, 2, 3]
    */
    
}

std::vector<int> MakeVector2(size_t N) {
    /* 
        This function creates a new vector of size N.
        Value type: int
        The values should be 1, 2, 3, 4, ..., N

        Example.
        call: MakeVector2(5)
        output: [1, 2, 3, 4, 5]
    */
    
}

std::vector<std::string> MakeVector3() {
    /* 
        This function creates a new vector!
        Value type: string
        The values should be: "abba", "caba", "abacaba"

        Example.
        call: MakeVector3()
        output: ["aba", "caba", "abacaba"]
    */
    
}

std::vector<int> MakeVector4(int value) {
    /* 
        This function creates a new vector of size 10! 
        Value type: int
        The values should be equal to the value argument.

        Example.
        call: MakeVector4(5)
        output: [5, 5, 5, 5, 5, 5, 5, 5, 5, 5]
    */
    
}

std::vector<int> MakeVector5(size_t N) {
    /* 
        This function creates a new vector with size equal to 2 * N.
        Value type: int
        The values should be 1, 2, 3, ..., N, N, N - 1, ..., 2, 1

        Example.
        call: MakeVector5(2)
        output: [1, 2, 2, 1]
    */
    
}

std::vector<int> MakeVector6(const std::vector<int> old_vector) {
    /* 
        This function creates a new vector from another vector.
        Value type: int
        Size is the same as the old vector.
        The values shoud be (old value) * 2

        Example.
        call: MakeVector6(std::vector<int>{1, 2, 3})
        output: [2, 4, 6]
    */
    
}

void MakeVector7(std::vector<int>& vector, int value1, int value2) {
    /* 
        This function add two new values at the end of the vector.
        It modifies the existing vector.
        Value type: int

        Example.
        call:
        std::vector<int> nums{1, 2, 3};
        MakeVector7(nums, 4, 5);
        output: nums == [1, 2, 3, 4, 5]
    */
    
}

void MakeVector8(std::vector<int>& vector) {
    /* 
        This function deletes two last elements from the vector.
        If the vector is empty, does nothing.
        Value type: int

        Example.
        call:
        std::vector<int> nums{1, 2, 3};
        MakeVector8(nums);
        output: nums == [1]
    */
    
}

std::vector<double> MakeVector9() {
    /* 
        This function creates a new vector of size 3.
        Value type: int
        The values should be equal to 3.14
        
        Example.
        call: MakeVector9();
        output: [3.14, 3.14, 3.14]
    */
    
}

std::vector<std::vector<int>> MakeVector10(size_t N) {
    /* 
        This function creates a matrix of size N filled with zeros.
        Matrix is a vector whose elements are also vector.
        
        Example 1.
        call: MakeVector10(1);
        output: [[0]]

        Example 1.
        call: MakeVector10(3);
        output: [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
    */
    
}
