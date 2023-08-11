
static void changeVar(uint32_t *pdata)
{
    *pdata = 10;
}

static void printVar(uint32_t value)
{
    Serial.print(" content: ");
    Serial.print(value);
    Serial.print('\n');
}

void swapValues(uint32_t *pval1, uint32_t *pval2)
{
    uint32_t temp = *pval1;
    *pval1 = *pval2;
    *pval2 = temp;
}

void task1()
{
    enum class Task1States {
        INIT,
        WAIT_DATA
    };
    static Task1States task1State = Task1States::INIT;

    switch (task1State)
    {
    case Task1States::INIT:
    {
        Serial.begin(115200);
        task1State = Task1States::WAIT_DATA;
        break;
    }

    case Task1States::WAIT_DATA:
    {
        if (Serial.available() > 0)
        {
            Serial.read();
            uint32_t var = 0;
            uint32_t *pvar = &var;
            Serial.print("var 1");
            printVar(*pvar);

            uint32_t anotherVar = 20;
            uint32_t *panotherVar = &anotherVar;
            Serial.print("var 2");
            printVar(*panotherVar);
            swapValues(pvar, panotherVar);

            Serial.print("var 1");
            printVar(*pvar);
            Serial.print("var 2");
            printVar(*panotherVar);
        }
        break;
    }

    default:
    {
        break;
    }
    }
}

void setup()
{
    task1();
}

void loop()
{
    task1();
}
