#pragma once

// [계약서 / 결재]

// CPU [      ]		GPU [      ]

class RootSignature
{
public:
	void Init(ComPtr<ID3D12Device> device);

	ComPtr<ID3D12RootSignature>	GetSignature() { return _signature; }

private:
	// GPU 쪽에 ComPtr로 객체 생성
	ComPtr<ID3D12RootSignature> _signature;


};

