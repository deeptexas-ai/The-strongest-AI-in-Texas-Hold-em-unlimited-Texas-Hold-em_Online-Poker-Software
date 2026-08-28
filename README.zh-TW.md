# Deep Hold'em AI | 德州撲克 AI 源碼

[簡體中文](README.md) | [English](README.en.md) | [繁體中文](README.zh-TW.md)

Deep Hold'em AI 是一個面向德州撲克 AI 研究、GTO 策略分析、CFR 訓練、勝率計算、範圍分析與離線復盤評估的源碼項目。項目適合用於撲克 AI 算法研究、訓練模擬器、策略可視化、牌局復盤、機器人評測與不涉及線上平台違規使用的技術驗證。

## 合規定位

- 德州撲克 AI 源碼 / Texas Hold'em AI source code
- CFR、MCCFR、強化學習、蒙特卡洛勝率模擬與博弈論研究
- 離線訓練、策略評估、牌局復盤與教學分析
- GTO solver、equity calculator、range analysis 與 poker AI research
- 不建議用於任何違反線上撲克平台規則、即時輔助、自動代打或規避檢測的場景

## 核心能力

- CFR / MCCFR：不完全信息博弈中的策略迭代與遺憾最小化
- 勝率計算：Monte Carlo 手牌勝率、公共牌模擬與範圍對抗分析
- 範圍分析：位置、行動線、下注尺度與對手範圍建模
- EV 評估：Fold、Call、Raise 等行動的期望收益分析
- 訓練框架：自博弈訓練、策略保存、樣本生成與評測流程
- 可視化方向：策略矩陣、範圍熱力圖、牌局復盤與訓練曲線

## 項目結構建議

```text
benchmark/              # 性能評測與算法對比
cfv/                    # Counterfactual value / CFR 相關模組
csrc/                   # C++ 高性能核心
game/                   # 撲克規則、牌局狀態與動作邏輯
robot/                  # 離線機器人與評測模組
supervised_strategy/    # 監督學習策略模組
tests/                  # 算法、規則、勝率與策略測試
docs/                   # GitHub Pages 產品與技術文檔
config.example/         # 脫敏配置示例
.github/workflows/      # CI 與 GitHub Pages 工作流
```

## 公開倉庫安全建議

公開倉庫適合展示算法結構、訓練流程、離線評測、截圖與文檔。不要公開真實線上帳號、平台規避邏輯、自動操作腳本、支付密鑰、私有數據集、真實玩家數據或違反平台規則的自動化能力。

## 文檔

- [項目主頁](docs/index.html)
- [功能介紹](docs/features.html)
- [架構說明](docs/architecture.html)
- [部署指南](docs/deployment.html)
- [合規使用](docs/responsible-use.html)

## 聯繫方式

Telegram：`@xuzongbin001`  
Email：`masterai918@gmail.com`

## License

具體以倉庫 License 文件為準。公開使用、商業部署和閉源集成前，請確認授權邊界。
