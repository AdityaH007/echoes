extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_SpriteMask();
	RegisterModule_SpriteMask();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_VFX();
	RegisterModule_VFX();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BillboardAsset; template <> void RegisterUnityClass<BillboardAsset>(const char*);
class BillboardRenderer; template <> void RegisterUnityClass<BillboardRenderer>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LODGroup; template <> void RegisterUnityClass<LODGroup>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class OcclusionArea; template <> void RegisterUnityClass<OcclusionArea>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; template <> void RegisterUnityClass<SortingGroup>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
namespace Unity { class SpringJoint; } template <> void RegisterUnityClass<Unity::SpringJoint>(const char*);
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class VFXManager; template <> void RegisterUnityClass<VFXManager>(const char*);
class VisualEffect; template <> void RegisterUnityClass<VisualEffect>(const char*);
class VisualEffectAsset; template <> void RegisterUnityClass<VisualEffectAsset>(const char*);
class VisualEffectObject; template <> void RegisterUnityClass<VisualEffectObject>(const char*);
class WindZone; template <> void RegisterUnityClass<WindZone>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 95 non stripped classes
	//0. Animation
	RegisterUnityClass<Animation>("Animation");
	//1. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//2. Animator
	RegisterUnityClass<Animator>("Animation");
	//3. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//4. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//5. Motion
	RegisterUnityClass<Motion>("Animation");
	//6. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//7. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//8. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//9. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//10. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//11. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//12. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//13. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//14. BillboardAsset
	RegisterUnityClass<BillboardAsset>("Core");
	//15. BillboardRenderer
	RegisterUnityClass<BillboardRenderer>("Core");
	//16. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//17. Camera
	RegisterUnityClass<Camera>("Core");
	//18. Component
	RegisterUnityClass<Unity::Component>("Core");
	//19. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//20. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//21. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//22. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//23. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//24. GameManager
	RegisterUnityClass<GameManager>("Core");
	//25. GameObject
	RegisterUnityClass<GameObject>("Core");
	//26. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//27. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//28. InputManager
	RegisterUnityClass<InputManager>("Core");
	//29. LODGroup
	RegisterUnityClass<LODGroup>("Core");
	//30. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//31. Light
	RegisterUnityClass<Light>("Core");
	//32. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//33. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//34. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//35. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//36. Material
	RegisterUnityClass<Material>("Core");
	//37. Mesh
	RegisterUnityClass<Mesh>("Core");
	//38. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//39. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//40. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//41. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//42. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//43. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//44. Object
	//Skipping Object
	//45. OcclusionArea
	RegisterUnityClass<OcclusionArea>("Core");
	//46. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//47. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//48. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//49. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//50. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//51. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//52. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//53. Renderer
	RegisterUnityClass<Renderer>("Core");
	//54. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//55. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//56. Shader
	RegisterUnityClass<Shader>("Core");
	//57. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//58. Skybox
	RegisterUnityClass<Skybox>("Core");
	//59. SortingGroup
	RegisterUnityClass<SortingGroup>("Core");
	//60. Sprite
	RegisterUnityClass<Sprite>("Core");
	//61. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//62. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//63. TagManager
	RegisterUnityClass<TagManager>("Core");
	//64. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//65. Texture
	RegisterUnityClass<Texture>("Core");
	//66. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//67. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//68. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//69. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//70. Transform
	RegisterUnityClass<Transform>("Core");
	//71. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//72. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//73. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//74. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//75. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//76. Collider
	RegisterUnityClass<Collider>("Physics");
	//77. Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//78. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//79. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//80. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//81. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//82. SpringJoint
	RegisterUnityClass<Unity::SpringJoint>("Physics");
	//83. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//84. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//85. Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//86. TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//87. Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//88. CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//89. CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//90. VFXManager
	RegisterUnityClass<VFXManager>("VFX");
	//91. VisualEffect
	RegisterUnityClass<VisualEffect>("VFX");
	//92. VisualEffectAsset
	RegisterUnityClass<VisualEffectAsset>("VFX");
	//93. VisualEffectObject
	RegisterUnityClass<VisualEffectObject>("VFX");
	//94. WindZone
	RegisterUnityClass<WindZone>("Wind");

}
