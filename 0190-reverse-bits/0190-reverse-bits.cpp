class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> bits(n);
        string binary = bits.to_string();

        reverse(binary.begin(), binary.end());
        unsigned long decimal = std::bitset<32>(binary).to_ulong();

        return decimal;
    }
};