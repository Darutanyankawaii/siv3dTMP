#include "./Basic.hpp"
#include "./Title.hpp"
#include "./StageSelect.hpp"
#include "./Game/Game.hpp"

void Main()
{
	//ウィンドウサイズの変更
	Window::Resize(SCENE_WIDTH, SCENE_HEIGHT);

	//シーンの追加方法
	//1,テンプレ文をもとにテンプレに追加したいシーンの名前を書きmanagerに加える
	//2,Basic.hppにある「enum class SceneName」の中に1で作成したシーンの名前を書き込む
	//3,作りたいシーンの.hppファイルと.cppファイルを作成する。
	//4,作りたいシーンの.hppファイルを#includeする。

	App manager;
	manager
		.add<Title>(SceneName::Title)//<-一番最初に表示されるシーン
		//シーン遷移によって訪れることが可能なシーン
		.add<StageSelect>(SceneName::StageSelect)
		.add<Game>(SceneName::Game)
		;

	const int FPS = 60;	// 1秒間に1画面を書き換える回数
	Stopwatch sw;
	sw.start();

	while (System::Update())
	{
		if (!manager.update())
		{
			break;
		}

		while (sw.msF() < 1000.0 / FPS);    //1/60秒経過するまでループ
		sw.restart();
	}
}

//
// - Debug ビルド: プログラムの最適化を減らす代わりに、エラーやクラッシュ時に詳細な情報を得られます。
//
// - Release ビルド: 最大限の最適化でビルドします。
//
// - [デバッグ] メニュー → [デバッグの開始] でプログラムを実行すると、[出力] ウィンドウに詳細なログが表示され、エラーの原因を探せます。
//
// - Visual Studio を更新した直後は、プログラムのリビルド（[ビルド]メニュー → [ソリューションのリビルド]）が必要な場合があります。
//
