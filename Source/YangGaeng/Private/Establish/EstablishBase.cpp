// Developed by YangGaeng Team.


#include "Establish/EstablishBase.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AEstablishBase::AEstablishBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ===== 계층 =====

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SCENE"));
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BOX"));

	RootComponent = Scene;
	Box->SetupAttachment(Scene);

}

// Called when the game starts or when spawned
void AEstablishBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstablishBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// 현재 객체가 차지하고 있는 공간 설정
void AEstablishBase::SetBoxArea(const USceneComponent* Component)
{
	// Component is valid.
	if (Component != NULL)
	{
		// 중심점과 경계에 대한 값 가져오기
		FVector Origin = Component->Bounds.Origin;
		FVector BoxExtent = Component->Bounds.BoxExtent;

		// ===== 현재 객체가 차지할 최대 공간 컬리전 설정 =====
		FVector _Max = Origin + BoxExtent;

		// x, y, z 방향 크기 재설정
		_Max /= ResizeStep;
		float _x = FMath::RoundToInt(_Max.X) * ResizeStep;
		float _y = FMath::RoundToInt(_Max.Y) * ResizeStep;
		float _z = FMath::Max(FMath::RoundToInt(_Max.Z) * ResizeStep, 100.0f);

		_x = FMath::Max(_x, _y);
		FVector _ResizeExtent = FVector(_x, _x, _z);
		_ResizeExtent += FVector(ResizeGap * 100.0f, ResizeGap * 100.0f, ResizeGap * 100.0f);

		// 컬리전 재설정
		Box->SetBoxExtent(_ResizeExtent, true);
		Box->SetWorldRotation(UKismetMathLibrary::MakeRotFromX(FVector(1.0f, 0.0f, 0.0f)));
	}
	else
	{
		// 아무것도 하지 않음.
	}
}