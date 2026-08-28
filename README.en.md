# Deep Hold'em AI Source Code

[简体中文](README.md) | [English](README.en.md) | [繁體中文](README.zh-TW.md)

Deep Hold'em AI is a Texas Hold'em poker AI source code project for AI research, GTO strategy analysis, CFR training, equity calculation, range analysis and offline hand-review evaluation. It is suitable for poker AI research, training simulators, strategy visualization, hand replay analysis, bot benchmarking and technical validation that does not violate online platform rules.

## Responsible Positioning

- Texas Hold'em AI source code and poker AI research
- CFR, MCCFR, reinforcement learning, Monte Carlo simulation and game theory
- Offline training, strategy evaluation, hand replay and educational analysis
- GTO solver, equity calculator, range analysis and poker AI benchmarking
- Not intended for real-time assistance, automated play, evasion or any use that violates online poker platform rules

## Core Capabilities

- CFR / MCCFR: regret minimization and strategy iteration for imperfect-information games
- Equity calculation: Monte Carlo hand equity, board simulation and range-vs-range analysis
- Range analysis: position, action line, bet sizing and opponent range modeling
- EV evaluation: expected value comparison for fold, call, raise and other actions
- Training workflow: self-play training, strategy persistence, sample generation and evaluation
- Visualization direction: strategy matrices, range heatmaps, hand replay and training curves

## Suggested Structure

```text
benchmark/              # Performance benchmarks and algorithm comparison
cfv/                    # Counterfactual value and CFR-related modules
csrc/                   # High-performance C++ core
game/                   # Poker rules, hand state and action logic
robot/                  # Offline bots and evaluation modules
supervised_strategy/    # Supervised strategy modules
tests/                  # Algorithm, rule, equity and strategy tests
docs/                   # GitHub Pages product and technical documentation
config.example/         # Desensitized configuration examples
.github/workflows/      # CI and GitHub Pages workflows
```

## Public Repository Scope

The public repository should show algorithm structure, training workflow, offline evaluation, screenshots and documentation. Do not publish real online accounts, platform evasion logic, automated play scripts, payment secrets, private datasets, real player data or capabilities that violate platform rules.

## Documentation

- [Project Home](docs/index.html)
- [Features](docs/features.html)
- [Architecture](docs/architecture.html)
- [Deployment](docs/deployment.html)
- [Responsible Use](docs/responsible-use.html)

## Contact

Telegram: `@xuzongbin001`  
Email: `masterai918@gmail.com`

## License

See the repository license files. Confirm licensing boundaries before public use, commercial deployment or closed-source integration.
