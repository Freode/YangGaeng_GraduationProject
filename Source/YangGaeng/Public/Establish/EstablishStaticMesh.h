// Developed by YangGaeng Team.

// 기본 상호작용할 객체의 종류가 Static Mesh

#pragma once

#include "../../YangGaeng.h"
#include "Establish/EstablishBase.h"
#include "EstablishStaticMesh.generated.h"

/**
 * 
 */
UCLASS()
class YANGGAENG_API AEstablishStaticMesh : public AEstablishBase
{
	GENERATED_BODY()
	

public:

	// 생성자
	AEstablishStaticMesh();

	// construction script
	virtual void OnConstruction(const FTransform& transform) override;

	// 기본 상호작용할 객체의 종류가 Static Mesh
	UPROPERTY(VisibleAnywhere, Category = Base)
		UStaticMeshComponent* Mesh;
};
