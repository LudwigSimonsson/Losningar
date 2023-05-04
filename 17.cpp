class Counter {
public:
    Counter() : count(0) {}
    Counter& operator++() {
        count++;
        return *this;
    }
private:
    int count;
};

Counter c;
++c;
//När postinkrementoperatorn används med ett objekt (c++) görs en kopia av objektet innan ökningen. Eftersom postinkrementoperatorn returnerar den ursprungliga versionen av objektet, är det nödvändigt att göra en kopia innan ökningen, så att den ursprungliga versionen kan returneras. Därför måste det finnas minnesallokering för att lagra en kopia av objektet, vilket kan påverka prestandan.

//När preinkrementoperatorn används (++c), å andra sidan, behöver ingen kopia av objektet göras eftersom det ursprungliga objektet returneras. Detta leder till en bättre prestanda eftersom det inte krävs någon extra minnesallokering.
