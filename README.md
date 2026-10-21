# UE5.8 Interactive Audio Sandbox

An interactive audio demonstration project built in Unreal Engine 5.8. This project serves as a testbed for implementing real-time audio systems, custom middleware integration, seamless DAW workflow automation, and advanced spatial audio mechanics.

---

## Tech Stack & Engine Details

- **Engine Version:** Unreal Engine 5.8 (Upgraded from UE 5.6)
- **IDE Support:** JetBrains Rider (RiderLink built & configured)
- **Audio Middleware:** FMOD Studio (Updated & compatibility issues resolved for UE 5.8)
- **DAW Integration:** Unreal Reaper Bridge Plugin

---

## Key Technical Setup & Features

### 1. Engine & Middleware Upgrades
- **UE 5.6 to 5.8 Migration:** Resolved breaking changes and API updates between engine versions.
- **FMOD Integration:** Upgraded FMOD Studio plugin integration to maintain full stability with Unreal Engine 5.8.
- **Rider Integration:** Built and configured **RiderLink** for optimized C++ debugging and live profiling.

### 2. Live Audio Editing Workflow
- **Unreal Reaper Bridge Plugin:** Configured real-time round-trip synchronization between Unreal Engine and REAPER.
  - Allows live modifications, processing, and editing of audio assets directly inside REAPER while running the project.

---

## Interactive Audio Systems Roadmap

### 1. Dynamic Footstep System *(In Progress)*
- Surface-aware footstep audio driven by physical materials and raycasting.
- Dynamic parameter adjustments based on movement speed, gait, and environment.

### 2. Dynamic Spatial Listener System *(Planned)*
- Custom audio listener positioning mechanism.
- Separates listener spatial position from camera orientation:
  - **Position:** Anchored to the Player Character to maintain physical spatial accuracy.
  - **Rotation:** Synchronized with the Camera to ensure precise directional orientation.

### 3. Dynamic Interactive & Backward Reverb *(Planned)*
- Real-time environmental acoustics dynamic routing.
- Context-aware spatial reverb and reverse/backward reverb FX triggered dynamically based on gameplay events and geometry.

---

## Project Setup & Installation

1. **Clone the Repository:**
   ```bash
   git clone [https://github.com/your-username/your-repo-name.git](https://github.com/your-username/your-repo-name.git)
