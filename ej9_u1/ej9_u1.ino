void setup() {
  task1();
  task2();
  task3();
}

void loop() {
  task1();
  task2();
  task3();
}

void task1()
{
  enum class Tarea1{
    INIT,
    WAIT_TIMEOUT
  };

  static Tarea1 estadoTarea = Tarea1::INIT;

  static uint32_t lastTime;
  static constexpr uint32_t intervalo = 1000;

  switch(estadoTarea)
  {
    case Tarea1::INIT:{
      Serial.begin(115200);
      lastTime=millis();
      estadoTarea= Tarea1::WAIT_TIMEOUT;
      break;
    }

    case Tarea1::WAIT_TIMEOUT:{
      uint32_t tiempoActual = millis();
      if ((tiempoActual - lastTime)>=intervalo){
        lastTime = tiempoActual;
        Serial.print("mensaje a 1hz\n");
      }
      break;
    }
    default :{break;
  }
}
}

void task2()
{
  enum class Tarea2{
    INIT,
    WAIT_TIMEOUT
  };

  static Tarea2 estadoTarea = Tarea2::INIT;

  static uint32_t lastTime;
  static constexpr uint32_t intervalo = 500;

  switch(estadoTarea)
  {
    case Tarea2::INIT:{
      Serial.begin(115200);
      lastTime=millis();
      estadoTarea= Tarea2::WAIT_TIMEOUT;
      break;
    }

    case Tarea2::WAIT_TIMEOUT:{
      uint32_t tiempoActual = millis();
      if ((tiempoActual - lastTime)>=intervalo){
        lastTime = tiempoActual;
        Serial.print("mensaje a 0.5hz\n");
      }
      break;
    }
    default :{break;
  }
}
}

void task3()
{
  enum class Tarea3{
    INIT,
    WAIT_TIMEOUT
  };

  static Tarea3 estadoTarea = Tarea3::INIT;

  static uint32_t lastTime;
  static constexpr uint32_t intervalo = 250;

  switch(estadoTarea)
  {
    case Tarea3::INIT:{
      Serial.begin(115200);
      lastTime=millis();
      estadoTarea= Tarea3::WAIT_TIMEOUT;
      break;
    }

    case Tarea3::WAIT_TIMEOUT:{
      uint32_t tiempoActual = millis();
      if ((tiempoActual - lastTime)>=intervalo){
        lastTime = tiempoActual;
        Serial.print("mensaje a 0.25hz\n");
      }
      break;
    }
    default :{break;
  }
}
}
