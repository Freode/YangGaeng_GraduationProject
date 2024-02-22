// Developed by YangGaeng Team.

// 기본 상호작용할 객체의 종류가 Static Mesh

#include "Establish/EstablishStaticMesh.h"

// 생성자
AEstablishStaticMesh::AEstablishStaticMesh()
{
	// 종류 설정
	EstablishType = EEstablishType::STATIC_MESH;

	// ===== 계층 =====

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	Mesh->SetupAttachment(Scene);

}

// construction script
void AEstablishStaticMesh::OnConstruction(const FTransform& transform)
{
	// 경계 설정
	if (Mesh->GetStaticMesh() != NULL)
	{
		FBoxSphereBounds MeshBounds = Mesh->GetStaticMesh()->GetBounds();
		SetBoxArea(MeshBounds.Origin, MeshBounds.BoxExtent);
	}
}