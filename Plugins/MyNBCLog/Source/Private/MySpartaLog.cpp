#include "MySpartaLog.h"
#include "Modules/ModuleManager.h"
#include "Engine/Engine.h"

IMPLEMENT_MODULE(FMySpartaLogModule, MySpartaLog)

void FMySpartaLogModule::StartupModule()
{
    UE_LOG(LogTemp, Warning, TEXT("MySpartaLog Plugin Module Started"));

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            3.f,
            FColor::Green,
            TEXT("MySpartaLog Plugin Startup")
        );
    }
}

void FMySpartaLogModule::ShutdownModule()
{
    UE_LOG(LogTemp, Warning, TEXT("MySpartaLog Plugin Module Shutdown"));
}