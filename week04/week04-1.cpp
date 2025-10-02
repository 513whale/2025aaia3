//week04-1.cpp

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles;//秨﹍耻硂或瞺
        while(numBottles >= numExchange) { //狦瞺计 >= 传秖,碞传
            numBottles = numBottles - numExchange +1;//传瞺
            ans++ ; //耻瞺
            numExchange ++;

        }
        return ans;
    }
};
