"//  ---------------------------------------------------------------------------\n"
"//\n"
"//  @file       TextPS.hlsl\n"
"//  @author     Egor Yusov\n"
"//	@brief		Source code of the TextPS D3D pixel shader\n"
"//  @license    This file is based on the TwDirect3D11.hlsl file \n"
"//              from the original AntTweakBar library.\n"
"//\n"
"//  ---------------------------------------------------------------------------\n"
"\n"
"\n"
" \n"
"Texture2D g_Font;\n"
"SamplerState g_Font_sampler;\n"
"\n"
"struct TextPSInput \n"
"{ \n"
"    float4 Pos : SV_POSITION; \n"
"    float4 Color : COLOR0; \n"
"    float2 Tex : TEXCOORD0; \n"
"};\n"
"   \n"
"float4 main(TextPSInput input) : SV_TARGET\n"
"{ \n"
"    return g_Font.Sample(g_Font_sampler, input.Tex) * input.Color; \n"
"}\n"