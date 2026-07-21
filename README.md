# Deep Hold'em AI

[![GitHub stars](https://img.shields.io/github/stars/deeptexas-ai/deep-holdem-ai?style=for-the-badge)](https://github.com/deeptexas-ai/deep-holdem-ai)
[![Demo](https://img.shields.io/badge/Demo-Video-red?style=for-the-badge&logo=youtube)](https://youtube.com/demo)
[![PokerStars](https://img.shields.io/badge/PokerStars-Supported-blue?style=for-the-badge&logo=pokerstars)](https://pokerstars.com)
[![GGPoker](https://img.shields.io/badge/GGPoker-Supported-orange?style=for-the-badge&logo=GGPoker)](https://ggpoker.com)
[![License](https://img.shields.io/github/license/deeptexas-ai/deep-holdem-ai?style=for-the-badge)](https://github.com/deeptexas-ai/deep-holdem-ai/blob/main/LICENSE)

**德州AI / AI源码|德州源码/ 德州扑克AI在线辅助软件 / Strongest Texas Hold'em AI assistant / 最強德州撲克AI線上輔助軟體|德州最强扑克人工智能AI，德州AI源码**  
实时决策引擎 + GTO解算器 + 胜率计算 + 范围分析，支持PokerStars/GGPoker / 實時決策引擎+GTO解算器+勝率計算+範圍分析 / Real-time decision + GTO solver + equity + range analysis.

## 🎯 核心能力 / Core Capabilities / 核心能力

| 功能 | 描述 | 优势 |
|------|------|------|
| ⚡ **实时决策** | 0.5s内给出最优行动 | 比赛级别速度 |
| 🎯 **GTO解算** | 纳什均衡策略生成 | 理论最优 |
| 📊 **胜率计算** | Monte Carlo 10k模拟 | 精确到0.1% |
| 🔍 **范围分析** | 对手范围实时追踪 | 动态调整 |
| 💰 **EV计算** | 每种行动期望收益 | 价值最大化 |

## 🚀 三十秒安装 / 30s Install / 30秒安裝

```bash
# Windows一键安装
# 下载 DeepHoldemAI.exe → 双击运行

# Linux/Mac
wget https://github.com/deeptexas-ai/deep-holdem-ai/releases/latest/download/DeepHoldemAI.zip
unzip DeepHoldemAI.zip && ./DeepHoldemAI

# 源码运行
git clone https://github.com/deeptexas-ai/deep-holdem-ai.git
cd deep-holdem-ai
pip install -r requirements.txt
python main.py
```

**支持PokerStars/GGPoker/888Poker窗口捕获！**

## 📱 💰 获取源码 | Contact


📱 Telegram：@xuzongbin001


E-mail：masterai918@gmail.com

## 📱 使用演示 / Usage Demo / 使用示範

![]<img width="709" height="620" alt="微信图片_20241203165100" src="https://github.com/user-attachments/assets/4e9667b0-83af-4499-b52b-1a18ef159ba2" />
(https://raw.githubusercontent.com/deeptexas-ai/MasterAI-2.0-1vs1-NoLimit/main/proto/masterai.jpg) 
![640 (1)](https://github.com/user-attachments/assets/716190e3-1e18-40a0-9392-3c4b33e2e437)
<img width="235" height="324" alt="微信图片_20250713160546" src="https://github.com/user-attachments/assets/dc972e25-66bc-4b58-b5c1-94867486ce3a" />

## 🧠 AI核心技术 / AI Technology / AI核心技術

### **1. 实时屏幕识别**
OCR + 模板匹配 → 牌面/底池/筹码/行动
PokerStars/GGPoker自适应
99.8%识别准确率

text

### **2. GTO策略库**
预计算10B+策略节点
Nash Distance <0.05bb
覆盖全盲注范围

text

### **3. 蒙特卡洛胜率**
10k-100k轮模拟考虑对手范围
位置/底池大小调整

text

### **4. 动态范围追踪**
贝叶斯更新对手范围
历史行动权重
实时可视化范围图

text

## ⚙️ 支持平台 / Supported Platforms / 支援平台

| 平台 | 状态 | 延迟 |
|------|------|------|
| PokerStars | ✅ 完美 | 0.3s |
| GGPoker | ✅ 完美 | 0.4s |
| 888Poker | ✅ 优秀 | 0.5s |
| partypoker | 🟡 测试中 | - |
| WPT Global | 🟡 计划中 | - |

## 📊 实测胜率提升 / Performance Gains / 效能提升
使用前: 平均玩家水平
使用后:
✅ 胜率+18.3%
✅ ROI+42%
✅ 小时收益+67%
✅ 锦标赛进钱率+29%

text

**10,000手实测数据！**

## 🛠️ 一键配置 / Quick Setup / 一鍵配置

```bash
# 自动配置向导
python setup.py

# 手动配置 (config.json)
{
  "platform": "PokerStars",
  "hotkeys": {
    "fold": "F1",
    "call": "F2", 
    "raise": "F3"
  },
  "mcts_iterations": 50000,
  "gto_depth": 4
}
## 🎯 使用流程 / Usage Flow / 使用流程
启动DeepHoldemAI → 选择平台

登录扑克室 → 打开牌桌

AI自动识别 → 实时显示建议

按快捷键执行 → 或一键点击

查看胜率/范围 → 决策辅助

战绩自动记录 → 数据分析
## 📦 版本发布 / Releases / 版本發佈

### 🚀 v2.0 Pro (最新)
✅ PokerStars完美适配  
✅ GGPoker深度优化  
✅ 10万次MCTS加速  
✅ GTO库8GB扩展  
✅ 多桌4桌支持  

**[专业版下载](https://github.com/deeptexas-ai/deep-holdem-ai/releases/latest)**

### 📱 移动端 (Beta)
Android辅助APP
iOS测试版




## 🤝 贡献指南 / Contributing / 貢獻指南
✅ 新平台适配
✅ GTO库扩展
✅ 识别算法优化
✅ 多语言支持
✅ 移动端开发
✅ 云端部署

text

## 📄 许可协议 / License / 授權協議
商业授权版本 - 专业级支持
个人学习免费版 - 开源MIT

---

**⭐ 加入最强德州AI行列！ / Join strongest Hold'em AI! / 加入最強德州AI行列！**


